

class Car:
	""" Represent a car """
	def __init__(self,make,model,year):
		self.make = make
		self.model = model
		self.year = year
		self.odometer_reading = 0

	def get_descriptive_name(self):
		"""Return a neatly formatted descritive name"""
		long_name = f"{self.year} {self.make} {self.model}"
		return long_name	


	def read_odometer(self):
		print(f"this car has {self.odometer_reading} miles")


	def update_odometer(self,mileage):
		if(mileage >= self.odometer_reading):
			self.odometer_reading = mileage
		else:
			print("You cant roll back the odometer")


	def increment_odometer(self,miles):
		if(miles < 0):
			print("You cant assign negative values")
		else:	
			self.odometer_reading += miles



car = Car(2019,"audi","a4")

car.update_odometer(45)
car.read_odometer()

car.increment_odometer(-5)
car.read_odometer()


