int compute(int i);

int test(int i);
 
int main(int argc, char** argv) {

    int sum = 0;
    for(int l = 0; l < 1000; l++) {
        int i = 0;
        while(i < 2000000) {
            if (test(i))
            sum += compute(i);
            i++;
        }   
    }
    
    return sum;
} 

