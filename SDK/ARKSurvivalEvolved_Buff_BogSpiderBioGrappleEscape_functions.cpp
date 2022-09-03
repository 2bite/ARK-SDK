// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderBioGrappleEscape_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BogSpiderBioGrappleEscape_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPCustomAllowAddBuff");

	ABuff_BogSpiderBioGrappleEscape_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_BogSpiderBioGrappleEscape_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.BPGetHUDElements");

	ABuff_BogSpiderBioGrappleEscape_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript
// ()

void ABuff_BogSpiderBioGrappleEscape_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.UserConstructionScript");

	ABuff_BogSpiderBioGrappleEscape_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappleEscape_C::ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappleEscape.Buff_BogSpiderBioGrappleEscape_C.ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape");

	ABuff_BogSpiderBioGrappleEscape_C_ExecuteUbergraph_Buff_BogSpiderBioGrappleEscape_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
