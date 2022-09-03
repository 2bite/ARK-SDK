// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MothPoisonSpore_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MothPoisonSpore_TrailEmitter.MothPoisonSpore_TrailEmitter_C.UserConstructionScript
// ()

void AMothPoisonSpore_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MothPoisonSpore_TrailEmitter.MothPoisonSpore_TrailEmitter_C.UserConstructionScript");

	AMothPoisonSpore_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MothPoisonSpore_TrailEmitter.MothPoisonSpore_TrailEmitter_C.ExecuteUbergraph_MothPoisonSpore_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMothPoisonSpore_TrailEmitter_C::ExecuteUbergraph_MothPoisonSpore_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MothPoisonSpore_TrailEmitter.MothPoisonSpore_TrailEmitter_C.ExecuteUbergraph_MothPoisonSpore_TrailEmitter");

	AMothPoisonSpore_TrailEmitter_C_ExecuteUbergraph_MothPoisonSpore_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
