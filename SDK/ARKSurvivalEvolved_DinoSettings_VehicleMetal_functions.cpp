// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_VehicleMetal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_VehicleMetal.DinoSettings_VehicleMetal_C.ExecuteUbergraph_DinoSettings_VehicleMetal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_VehicleMetal_C::ExecuteUbergraph_DinoSettings_VehicleMetal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_VehicleMetal.DinoSettings_VehicleMetal_C.ExecuteUbergraph_DinoSettings_VehicleMetal");

	UDinoSettings_VehicleMetal_C_ExecuteUbergraph_DinoSettings_VehicleMetal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
