// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_OnlyRelevantToOwner_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Base_OnlyRelevantToOwner.Buff_Base_OnlyRelevantToOwner_C.UserConstructionScript
// ()

void ABuff_Base_OnlyRelevantToOwner_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_OnlyRelevantToOwner.Buff_Base_OnlyRelevantToOwner_C.UserConstructionScript");

	ABuff_Base_OnlyRelevantToOwner_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Base_OnlyRelevantToOwner.Buff_Base_OnlyRelevantToOwner_C.ExecuteUbergraph_Buff_Base_OnlyRelevantToOwner
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Base_OnlyRelevantToOwner_C::ExecuteUbergraph_Buff_Base_OnlyRelevantToOwner(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Base_OnlyRelevantToOwner.Buff_Base_OnlyRelevantToOwner_C.ExecuteUbergraph_Buff_Base_OnlyRelevantToOwner");

	ABuff_Base_OnlyRelevantToOwner_C_ExecuteUbergraph_Buff_Base_OnlyRelevantToOwner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
