// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_NameLess_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NameLess_TrailEmitter.NameLess_TrailEmitter_C.UserConstructionScript
// ()

void ANameLess_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NameLess_TrailEmitter.NameLess_TrailEmitter_C.UserConstructionScript");

	ANameLess_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NameLess_TrailEmitter.NameLess_TrailEmitter_C.ExecuteUbergraph_NameLess_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANameLess_TrailEmitter_C::ExecuteUbergraph_NameLess_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NameLess_TrailEmitter.NameLess_TrailEmitter_C.ExecuteUbergraph_NameLess_TrailEmitter");

	ANameLess_TrailEmitter_C_ExecuteUbergraph_NameLess_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
