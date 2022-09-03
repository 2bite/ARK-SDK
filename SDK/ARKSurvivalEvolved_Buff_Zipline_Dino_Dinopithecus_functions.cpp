// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Dino_Dinopithecus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.BuffTickServer
// (NetReliable, Native, Event, Static, NetMulticast, MulticastDelegate, Public, Private, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, DLLImport, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Dino_Dinopithecus_C::STATIC_BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.BuffTickServer");

	ABuff_Zipline_Dino_Dinopithecus_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.UserConstructionScript
// ()

void ABuff_Zipline_Dino_Dinopithecus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.UserConstructionScript");

	ABuff_Zipline_Dino_Dinopithecus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Zipline_Dino_Dinopithecus_C::ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C.ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus");

	ABuff_Zipline_Dino_Dinopithecus_C_ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
