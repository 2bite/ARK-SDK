// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IsNotPlayerMoveCommand_DK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotPlayerMoveCommand_DK_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ReceiveConditionCheck");

	UIsNotPlayerMoveCommand_DK_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ExecuteUbergraph_IsNotPlayerMoveCommand_DK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UIsNotPlayerMoveCommand_DK_C::ExecuteUbergraph_IsNotPlayerMoveCommand_DK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IsNotPlayerMoveCommand_DK.IsNotPlayerMoveCommand_DK_C.ExecuteUbergraph_IsNotPlayerMoveCommand_DK");

	UIsNotPlayerMoveCommand_DK_C_ExecuteUbergraph_IsNotPlayerMoveCommand_DK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
