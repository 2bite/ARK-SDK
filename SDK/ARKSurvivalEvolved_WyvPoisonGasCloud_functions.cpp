// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvPoisonGasCloud_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.UserConstructionScript
// ()

void AWyvPoisonGasCloud_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.UserConstructionScript");

	AWyvPoisonGasCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.ExecuteUbergraph_WyvPoisonGasCloud
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvPoisonGasCloud_C::ExecuteUbergraph_WyvPoisonGasCloud(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WyvPoisonGasCloud.WyvPoisonGasCloud_C.ExecuteUbergraph_WyvPoisonGasCloud");

	AWyvPoisonGasCloud_C_ExecuteUbergraph_WyvPoisonGasCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
