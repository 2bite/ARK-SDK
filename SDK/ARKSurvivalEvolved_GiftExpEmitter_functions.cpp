// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiftExpEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GiftExpEmitter.GiftExpEmitter_C.UserConstructionScript
// ()

void AGiftExpEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftExpEmitter.GiftExpEmitter_C.UserConstructionScript");

	AGiftExpEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiftExpEmitter.GiftExpEmitter_C.ExecuteUbergraph_GiftExpEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiftExpEmitter_C::ExecuteUbergraph_GiftExpEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiftExpEmitter.GiftExpEmitter_C.ExecuteUbergraph_GiftExpEmitter");

	AGiftExpEmitter_C_ExecuteUbergraph_GiftExpEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
