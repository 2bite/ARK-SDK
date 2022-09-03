// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFlare_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFlare.ProjFlare_C.ReceiveBeginPlay
// ()

void AProjFlare_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.ReceiveBeginPlay");

	AProjFlare_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare.ProjFlare_C.ReceiveEndPlay
// ()
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlare_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.ReceiveEndPlay");

	AProjFlare_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare.ProjFlare_C.DestroySelf
// ()

void AProjFlare_C::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.DestroySelf");

	AProjFlare_C_DestroySelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare.ProjFlare_C.UserConstructionScript
// ()

void AProjFlare_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.UserConstructionScript");

	AProjFlare_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlare_C::ExecuteUbergraph_ProjFlare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjFlare.ProjFlare_C.ExecuteUbergraph_ProjFlare");

	AProjFlare_C_ExecuteUbergraph_ProjFlare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
