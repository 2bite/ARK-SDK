// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_VehicleWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoSettings_VehicleWood.DinoSettings_VehicleWood_C.ExecuteUbergraph_DinoSettings_VehicleWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoSettings_VehicleWood_C::ExecuteUbergraph_DinoSettings_VehicleWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoSettings_VehicleWood.DinoSettings_VehicleWood_C.ExecuteUbergraph_DinoSettings_VehicleWood");

	UDinoSettings_VehicleWood_C_ExecuteUbergraph_DinoSettings_VehicleWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
