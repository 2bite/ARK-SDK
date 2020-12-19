// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderWeb_TrailEmitterSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.UserConstructionScript
// ()

void ASpiderWeb_TrailEmitterSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.UserConstructionScript");

	ASpiderWeb_TrailEmitterSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.ExecuteUbergraph_SpiderWeb_TrailEmitterSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpiderWeb_TrailEmitterSmall_C::ExecuteUbergraph_SpiderWeb_TrailEmitterSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpiderWeb_TrailEmitterSmall.SpiderWeb_TrailEmitterSmall_C.ExecuteUbergraph_SpiderWeb_TrailEmitterSmall");

	ASpiderWeb_TrailEmitterSmall_C_ExecuteUbergraph_SpiderWeb_TrailEmitterSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
