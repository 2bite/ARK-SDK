// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndbossSpiderWeb_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndbossSpiderWeb_TrailEmitter.EndbossSpiderWeb_TrailEmitter_C.UserConstructionScript
// ()

void AEndbossSpiderWeb_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossSpiderWeb_TrailEmitter.EndbossSpiderWeb_TrailEmitter_C.UserConstructionScript");

	AEndbossSpiderWeb_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndbossSpiderWeb_TrailEmitter.EndbossSpiderWeb_TrailEmitter_C.ExecuteUbergraph_EndbossSpiderWeb_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndbossSpiderWeb_TrailEmitter_C::ExecuteUbergraph_EndbossSpiderWeb_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndbossSpiderWeb_TrailEmitter.EndbossSpiderWeb_TrailEmitter_C.ExecuteUbergraph_EndbossSpiderWeb_TrailEmitter");

	AEndbossSpiderWeb_TrailEmitter_C_ExecuteUbergraph_EndbossSpiderWeb_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
