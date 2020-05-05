""" OOP examples """

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

			
class Battery:

	def __init__(self,battery_size = 75):
		self.battery_size = battery_size

	def describe_battery(self):
		print(f"this car has a {self.battery_size}-kWh batery")

	def get_range(self):
		if self.battery_size == 75:
			range = 260
		elif self.battery_size == 100:
			range = 315

		print(f"This car can go about {range} miles on a full charge")


class ElectricCar(Car):
	"""Represent aspects of a car, specific to electric vehicles"""

	def __init__(self,make,model,year):
		super().__init__(make,model,year)
		self.battery = Battery()


	
new_car = ElectricCar("tesla","model s",2019)

new_car.battery.describe_battery()

new_car.battery.get_range()