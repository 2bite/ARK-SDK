// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArthroSpit_TrailEmitter_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C.UserConstructionScript
// ()

void AArthroSpit_TrailEmitter_Corrupt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C.UserConstructionScript");

	AArthroSpit_TrailEmitter_Corrupt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C.ExecuteUbergraph_ArthroSpit_TrailEmitter_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArthroSpit_TrailEmitter_Corrupt_C::ExecuteUbergraph_ArthroSpit_TrailEmitter_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArthroSpit_TrailEmitter_Corrupt.ArthroSpit_TrailEmitter_Corrupt_C.ExecuteUbergraph_ArthroSpit_TrailEmitter_Corrupt");

	AArthroSpit_TrailEmitter_Corrupt_C_ExecuteUbergraph_ArthroSpit_TrailEmitter_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
