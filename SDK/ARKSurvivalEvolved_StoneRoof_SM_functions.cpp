// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneRoof_SM_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function StoneRoof_SM.StoneRoof_SM_C.UserConstructionScript
// ()

void AStoneRoof_SM_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneRoof_SM.StoneRoof_SM_C.UserConstructionScript");

	AStoneRoof_SM_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoneRoof_SM.StoneRoof_SM_C.ExecuteUbergraph_StoneRoof_SM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStoneRoof_SM_C::ExecuteUbergraph_StoneRoof_SM(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StoneRoof_SM.StoneRoof_SM_C.ExecuteUbergraph_StoneRoof_SM");

	AStoneRoof_SM_C_ExecuteUbergraph_StoneRoof_SM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
