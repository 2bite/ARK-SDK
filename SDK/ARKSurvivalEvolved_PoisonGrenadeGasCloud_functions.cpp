// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonGrenadeGasCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.UserConstructionScript
// ()

void APoisonGrenadeGasCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.UserConstructionScript");

	APoisonGrenadeGasCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.ExecuteUbergraph_PoisonGrenadeGasCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APoisonGrenadeGasCloud_C::ExecuteUbergraph_PoisonGrenadeGasCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C.ExecuteUbergraph_PoisonGrenadeGasCloud");

	APoisonGrenadeGasCloud_C_ExecuteUbergraph_PoisonGrenadeGasCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
