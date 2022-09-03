// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRock_Chalico_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRock_Chalico.ProjRock_Chalico_C.ReceiveBeginPlay
// ()

void AProjRock_Chalico_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Chalico.ProjRock_Chalico_C.ReceiveBeginPlay");

	AProjRock_Chalico_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_Chalico.ProjRock_Chalico_C.UserConstructionScript
// ()

void AProjRock_Chalico_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Chalico.ProjRock_Chalico_C.UserConstructionScript");

	AProjRock_Chalico_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRock_Chalico.ProjRock_Chalico_C.ExecuteUbergraph_ProjRock_Chalico
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRock_Chalico_C::ExecuteUbergraph_ProjRock_Chalico(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRock_Chalico.ProjRock_Chalico_C.ExecuteUbergraph_ProjRock_Chalico");

	AProjRock_Chalico_C_ExecuteUbergraph_ProjRock_Chalico_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
