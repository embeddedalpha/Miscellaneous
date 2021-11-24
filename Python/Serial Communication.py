import  serial
import  time

s = serial.Serial('COM8',9600)

def Read_Command():
    eol = b'w'
    leneol = len(eol)
    line = bytearray()
    while True:
        c = s.read(1)
        if c:
            line += c
            if line[-leneol:] == eol:
                break
        else:
            break
    return bytes(line)


def Get_BMS():
    if(s.is_open == False):
        s.open() 
    s.write(b'\xDD')
    s.write(b'\xA5')
    s.write(b'\x03')
    s.write(b'\x00')
    s.write(b'\xff')
    s.write(b'\xfd')
    s.write(b'\x77')
    
    z = Read_Command()
    print("Total Voltage :",(z[4] << 8 | z[5])/100)
    print("Current Consumption :",(z[6] << 8 | z[7])/100)
    print("Remaining Capacity :",(z[8] << 8 | z[9])/100)
    print("Nominal Capacity :",(z[10] << 8 | z[11])/100)
    print("Number of Cycles :",(z[12] << 8 | z[13]))
    print("Remaining Capacity in %:",z[23])
    print("Number of Cells :",(z[25]))
    print("Number of NTCs:",z[26])
    print("Temperature from NTC1 :",((z[27] << 8 | z[28]) - 2731)/10)
    print("Temperature from NTC1 :",((z[29] << 8 | z[30]) - 2731)/10)
    s.flush()
    s.close()
#     print(z)
    time.sleep(3)
    
    
while True:
    Get_BMS()



