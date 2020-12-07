// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapLasso_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapLasso.WeapLasso_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapLasso_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLasso.WeapLasso_C.ReceiveTick");

	AWeapLasso_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLasso.WeapLasso_C.BPCanEquip
// ()
// Parameters:
// class AShooterCharacter**      ByCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapLasso_C::BPCanEquip(class AShooterCharacter** ByCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLasso.WeapLasso_C.BPCanEquip");

	AWeapLasso_C_BPCanEquip_Params params;
	params.ByCharacter = ByCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapLasso.WeapLasso_C.BPRemainEquipped
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapLasso_C::BPRemainEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLasso.WeapLasso_C.BPRemainEquipped");

	AWeapLasso_C_BPRemainEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapLasso.WeapLasso_C.UserConstructionScript
// ()

void AWeapLasso_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLasso.WeapLasso_C.UserConstructionScript");

	AWeapLasso_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapLasso.WeapLasso_C.ExecuteUbergraph_WeapLasso
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapLasso_C::ExecuteUbergraph_WeapLasso(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapLasso.WeapLasso_C.ExecuteUbergraph_WeapLasso");

	AWeapLasso_C_ExecuteUbergraph_WeapLasso_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
