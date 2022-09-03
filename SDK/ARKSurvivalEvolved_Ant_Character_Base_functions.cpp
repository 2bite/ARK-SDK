// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ant_Character_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ant_Character_Base.Ant_Character_Base_C.UserConstructionScript
// ()

void AAnt_Character_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_Character_Base.Ant_Character_Base_C.UserConstructionScript");

	AAnt_Character_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ant_Character_Base.Ant_Character_Base_C.ExecuteUbergraph_Ant_Character_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAnt_Character_Base_C::ExecuteUbergraph_Ant_Character_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ant_Character_Base.Ant_Character_Base_C.ExecuteUbergraph_Ant_Character_Base");

	AAnt_Character_Base_C_ExecuteUbergraph_Ant_Character_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
