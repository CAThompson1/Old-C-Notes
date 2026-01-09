using System;

public class VehicleExample
{

	private string mMake;
	private string mModel;
	private int mYear;

	private int mMileage
	
	
	//C# Properties
	public string Make
	{
		get
		{
			return mMake;
		}
	}	
		
		
		
		
		//defult constructor
	public VehicleExample()
	{


	}
	//Overloaded constructor
	public VehicleExample(string mMake, string mModel, int mMilage = 0)
	{
		mMake = mMake;
		mModel = model; 
		mYear = year;
		mMileage = Milage;
	}
	//repeat this for all varibales
	//ex:GetModel or GetYear
	public string GetMake()
	{
		return mMake;
	}
	public string GetDescription()
	{
		string condition = (mMileage > 10) ? "Used" : "New";
		string suffex = (mMileage == 0 || mMileage > 1) ? "s" : "";

		return $"{condition}{mYear} {mMake} {mModel}";

	}

	public void SetMileage(int miles)
	{
		if(miles > 0)
		{
			mMileage = miles;
		}
		
	}






	StringBuilder SB = 

}
