// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_ReturnToPlayer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ReceiveTick
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UService_Fjordhawk_ReturnToPlayer_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ReceiveTick");

	UService_Fjordhawk_ReturnToPlayer_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_Fjordhawk_ReturnToPlayer_C::ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C.ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer");

	UService_Fjordhawk_ReturnToPlayer_C_ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
