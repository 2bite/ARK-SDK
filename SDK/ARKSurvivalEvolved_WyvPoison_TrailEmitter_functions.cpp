// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvPoison_TrailEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvPoison_TrailEmitter.WyvPoison_TrailEmitter_C.UserConstructionScript
// ()

void AWyvPoison_TrailEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoison_TrailEmitter.WyvPoison_TrailEmitter_C.UserConstructionScript");

	AWyvPoison_TrailEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvPoison_TrailEmitter.WyvPoison_TrailEmitter_C.ExecuteUbergraph_WyvPoison_TrailEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvPoison_TrailEmitter_C::ExecuteUbergraph_WyvPoison_TrailEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoison_TrailEmitter.WyvPoison_TrailEmitter_C.ExecuteUbergraph_WyvPoison_TrailEmitter");

	AWyvPoison_TrailEmitter_C_ExecuteUbergraph_WyvPoison_TrailEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
