// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderWeb_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpiderWeb_TrailEmitter.SpiderWeb_TrailEmitter_C.UserConstructionScript
// ()

void ASpiderWeb_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitter.SpiderWeb_TrailEmitter_C.UserConstructionScript");

	ASpiderWeb_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderWeb_TrailEmitter.SpiderWeb_TrailEmitter_C.ExecuteUbergraph_SpiderWeb_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderWeb_TrailEmitter_C::ExecuteUbergraph_SpiderWeb_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitter.SpiderWeb_TrailEmitter_C.ExecuteUbergraph_SpiderWeb_TrailEmitter");

	ASpiderWeb_TrailEmitter_C_ExecuteUbergraph_SpiderWeb_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
