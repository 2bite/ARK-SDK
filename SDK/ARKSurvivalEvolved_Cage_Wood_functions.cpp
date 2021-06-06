// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cage_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cage_Wood.Cage_Wood_C.UserConstructionScript
// ()

void ACage_Wood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cage_Wood.Cage_Wood_C.UserConstructionScript");

	ACage_Wood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cage_Wood.Cage_Wood_C.ExecuteUbergraph_Cage_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACage_Wood_C::ExecuteUbergraph_Cage_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cage_Wood.Cage_Wood_C.ExecuteUbergraph_Cage_Wood");

	ACage_Wood_C_ExecuteUbergraph_Cage_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
