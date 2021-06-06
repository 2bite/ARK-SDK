// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Net_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjArrow_Net.ProjArrow_Net_C.OnExplode
// ()
// Parameters:
// struct FHitResult              Result                         (Parm, OutParm, ReferenceParm)

void AProjArrow_Net_C::OnExplode(struct FHitResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Net.ProjArrow_Net_C.OnExplode");

	AProjArrow_Net_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjArrow_Net.ProjArrow_Net_C.ReceiveBeginPlay
// ()

void AProjArrow_Net_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Net.ProjArrow_Net_C.ReceiveBeginPlay");

	AProjArrow_Net_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Net.ProjArrow_Net_C.UserConstructionScript
// ()

void AProjArrow_Net_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Net.ProjArrow_Net_C.UserConstructionScript");

	AProjArrow_Net_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Net.ProjArrow_Net_C.Multicast_OpenNet
// ()

void AProjArrow_Net_C::Multicast_OpenNet()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Net.ProjArrow_Net_C.Multicast_OpenNet");

	AProjArrow_Net_C_Multicast_OpenNet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjArrow_Net.ProjArrow_Net_C.ExecuteUbergraph_ProjArrow_Net
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjArrow_Net_C::ExecuteUbergraph_ProjArrow_Net(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjArrow_Net.ProjArrow_Net_C.ExecuteUbergraph_ProjArrow_Net");

	AProjArrow_Net_C_ExecuteUbergraph_ProjArrow_Net_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
