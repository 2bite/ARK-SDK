// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaiju_PlayerHurtKingRecently_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_KingKaiju_PlayerHurtKingRecently.Buff_KingKaiju_PlayerHurtKingRecently_C.UserConstructionScript
// ()

void ABuff_KingKaiju_PlayerHurtKingRecently_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaiju_PlayerHurtKingRecently.Buff_KingKaiju_PlayerHurtKingRecently_C.UserConstructionScript");

	ABuff_KingKaiju_PlayerHurtKingRecently_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaiju_PlayerHurtKingRecently.Buff_KingKaiju_PlayerHurtKingRecently_C.ExecuteUbergraph_Buff_KingKaiju_PlayerHurtKingRecently
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaiju_PlayerHurtKingRecently_C::ExecuteUbergraph_Buff_KingKaiju_PlayerHurtKingRecently(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaiju_PlayerHurtKingRecently.Buff_KingKaiju_PlayerHurtKingRecently_C.ExecuteUbergraph_Buff_KingKaiju_PlayerHurtKingRecently");

	ABuff_KingKaiju_PlayerHurtKingRecently_C_ExecuteUbergraph_Buff_KingKaiju_PlayerHurtKingRecently_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
