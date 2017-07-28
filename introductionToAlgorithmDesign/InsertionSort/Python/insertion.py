

def main():
    input_list = map(int, raw_input().split())
    for i in xrange(1,len(input_list)):
        key = input_list[i]
        j = i-1
        while ( input_list[j] > key and j >= 0):
            input_list[j+1] = input_list[j];
            j = j-1;
        input_list[j+1] = key
        for k in xrange(i):
            print input_list[k],
        print
    print input_list

if  __name__ == '__main__':
    main()
    
