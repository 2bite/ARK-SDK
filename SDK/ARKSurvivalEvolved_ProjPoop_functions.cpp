// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjPoop_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjPoop.ProjPoop_C.UserConstructionScript
// ()

void AProjPoop_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop.ProjPoop_C.UserConstructionScript");

	AProjPoop_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjPoop.ProjPoop_C.ExecuteUbergraph_ProjPoop
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjPoop_C::ExecuteUbergraph_ProjPoop(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjPoop.ProjPoop_C.ExecuteUbergraph_ProjPoop");

	AProjPoop_C_ExecuteUbergraph_ProjPoop_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
