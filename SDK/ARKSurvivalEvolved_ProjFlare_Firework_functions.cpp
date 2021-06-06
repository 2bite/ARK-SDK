// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFlare_Firework_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFlare_Firework.ProjFlare_Firework_C.UserConstructionScript
// ()

void AProjFlare_Firework_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare_Firework.ProjFlare_Firework_C.UserConstructionScript");

	AProjFlare_Firework_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare_Firework.ProjFlare_Firework_C.ExecuteUbergraph_ProjFlare_Firework
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlare_Firework_C::ExecuteUbergraph_ProjFlare_Firework(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare_Firework.ProjFlare_Firework_C.ExecuteUbergraph_ProjFlare_Firework");

	AProjFlare_Firework_C_ExecuteUbergraph_ProjFlare_Firework_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
