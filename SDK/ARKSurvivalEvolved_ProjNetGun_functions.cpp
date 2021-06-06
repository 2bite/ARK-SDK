// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjNetGun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjNetGun.ProjNetGun_C.UserConstructionScript
// ()

void AProjNetGun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjNetGun.ProjNetGun_C.UserConstructionScript");

	AProjNetGun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjNetGun.ProjNetGun_C.ExecuteUbergraph_ProjNetGun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjNetGun_C::ExecuteUbergraph_ProjNetGun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjNetGun.ProjNetGun_C.ExecuteUbergraph_ProjNetGun");

	AProjNetGun_C_ExecuteUbergraph_ProjNetGun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
