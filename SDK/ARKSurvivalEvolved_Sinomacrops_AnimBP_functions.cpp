// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sinomacrops_AnimBP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar
// (Native, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, BlueprintEvent)
// Parameters:
// class AShooterCharacter**      ShooterChar                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasBuffFromPawnOwner           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void USinomacrops_AnimBP_C::UpdateAnimFromShooterChar(class AShooterCharacter** ShooterChar, float* DeltaTime, bool* HasBuffFromPawnOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.UpdateAnimFromShooterChar");

	USinomacrops_AnimBP_C_UpdateAnimFromShooterChar_Params params;
	params.ShooterChar = ShooterChar;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasBuffFromPawnOwner != nullptr)
		*HasBuffFromPawnOwner = params.HasBuffFromPawnOwner;
}


// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim
// (NetReliable, Exec, Event, NetMulticast, MulticastDelegate, Public, Private, HasDefaults, BlueprintEvent)
// Parameters:
// class APrimalDinoCharacter**   CarryingDino                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USinomacrops_AnimBP_C::PassengerUpdateAnim(class APrimalDinoCharacter** CarryingDino, float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.PassengerUpdateAnim");

	USinomacrops_AnimBP_C_PassengerUpdateAnim_Params params;
	params.CarryingDino = CarryingDino;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USinomacrops_AnimBP_C::ExecuteUbergraph_Sinomacrops_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sinomacrops_AnimBP.Sinomacrops_AnimBP_C.ExecuteUbergraph_Sinomacrops_AnimBP");

	USinomacrops_AnimBP_C_ExecuteUbergraph_Sinomacrops_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
