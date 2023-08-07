# -----------------------------Ques 1-------------------------------------------------------------------------

sum_of_numbers=0
number_of_items=0

while True:
    try:
        val = float(input("Enter the data"))
        sum_of_numbers+=val
        number_of_items+=1
    except ValueError:
        break

if number_of_items>0:
    res=sum_of_numbers/number_of_items
    print("The average is: {:.2f}".format(res))
else:
    print("Please Enter a Valid input")

# -----------------------------Ques 2---------------------------------------------------------------------------

class Bank:
    dictionary = {}
    def accountopen(self, accnumber, balance=0):
        if accnumber in self.dictionary:
            print("Account exists Already")
        else:
            self.dictionary[accnumber] = balance
            print("Account created")

    def amountdeposit(self,accnumber, paisa):
        if accnumber in self.dictionary:
            self.dictionary[accnumber]+=paisa
            print("Deposit successful.")
        else:
            print("Account does not exist.")

    def amountnikala(self,accnumber,paisa):
        if accnumber in self.dictionary:
            if self.dictionary[accnumber] >=paisa:
                self.dictionary[accnumber] -=paisa
                print("Withdrawal successful.")
            else:
                print("Balance in the account is not suffiecient")
        else:
            print("No such account exists")

    def paisacheck(self,accnumber):
        if accnumber in self.dictionary:
            paisa= self.dictionary[accnumber]
            print("Account Balance:", paisa)
        else:
            print("No such Account exists")



axis_bank= Bank()

axis_bank.accountopen(2000,200)  
axis_bank.amountdeposit(2000,50)  
axis_bank.paisacheck(2000) 
axis_bank.amountnikala(2000,40)
axis_bank.paisacheck(3000) 
axis_bank.paisacheck(2000)  