// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cage_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Cage_Base.Cage_Base_C.UserConstructionScript
// ()

void ACage_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cage_Base.Cage_Base_C.UserConstructionScript");

	ACage_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cage_Base.Cage_Base_C.ExecuteUbergraph_Cage_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACage_Base_C::ExecuteUbergraph_Cage_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cage_Base.Cage_Base_C.ExecuteUbergraph_Cage_Base");

	ACage_Base_C_ExecuteUbergraph_Cage_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
