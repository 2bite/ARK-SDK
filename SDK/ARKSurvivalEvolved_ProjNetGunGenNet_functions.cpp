// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjNetGunGenNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjNetGunGenNet.ProjNetGunGenNet_C.BPAttachedRootComponent
// ()

void AProjNetGunGenNet_C::BPAttachedRootComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjNetGunGenNet.ProjNetGunGenNet_C.BPAttachedRootComponent");

	AProjNetGunGenNet_C_BPAttachedRootComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjNetGunGenNet.ProjNetGunGenNet_C.UserConstructionScript
// ()

void AProjNetGunGenNet_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjNetGunGenNet.ProjNetGunGenNet_C.UserConstructionScript");

	AProjNetGunGenNet_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjNetGunGenNet.ProjNetGunGenNet_C.ExecuteUbergraph_ProjNetGunGenNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjNetGunGenNet_C::ExecuteUbergraph_ProjNetGunGenNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjNetGunGenNet.ProjNetGunGenNet_C.ExecuteUbergraph_ProjNetGunGenNet");

	AProjNetGunGenNet_C_ExecuteUbergraph_ProjNetGunGenNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
