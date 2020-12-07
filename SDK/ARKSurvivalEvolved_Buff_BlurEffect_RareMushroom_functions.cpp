// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BlurEffect_RareMushroom_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BlurEffect_RareMushroom_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.BPCustomAllowAddBuff");

	ABuff_BlurEffect_RareMushroom_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.UserConstructionScript
// ()

void ABuff_BlurEffect_RareMushroom_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.UserConstructionScript");

	ABuff_BlurEffect_RareMushroom_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.ExecuteUbergraph_Buff_BlurEffect_RareMushroom
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BlurEffect_RareMushroom_C::ExecuteUbergraph_Buff_BlurEffect_RareMushroom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C.ExecuteUbergraph_Buff_BlurEffect_RareMushroom");

	ABuff_BlurEffect_RareMushroom_C_ExecuteUbergraph_Buff_BlurEffect_RareMushroom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
