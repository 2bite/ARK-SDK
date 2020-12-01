// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ScorchedEarthDayCycle_Interface_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm
// ()
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScorchedEarthDayCycle_Interface_C::GetIsElectricalStorm(bool* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetIsElectricalStorm");

	UScorchedEarthDayCycle_Interface_C_GetIsElectricalStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues
// ()
// Parameters:
// TArray<class AActor*>          LocationRegions                (Parm, OutParm, ZeroConstructor)
// int                            CurrentRegion                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScorchedEarthDayCycle_Interface_C::GetElectricalStormValues(TArray<class AActor*>* LocationRegions, int* CurrentRegion, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScorchedEarthDayCycle_Interface.ScorchedEarthDayCycle_Interface_C.GetElectricalStormValues");

	UScorchedEarthDayCycle_Interface_C_GetElectricalStormValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationRegions != nullptr)
		*LocationRegions = params.LocationRegions;
	if (CurrentRegion != nullptr)
		*CurrentRegion = params.CurrentRegion;
	if (Radius != nullptr)
		*Radius = params.Radius;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
