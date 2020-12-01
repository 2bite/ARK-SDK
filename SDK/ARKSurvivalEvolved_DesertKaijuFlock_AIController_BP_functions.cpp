// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaijuFlock_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.UserConstructionScript
// ()

void ADesertKaijuFlock_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.UserConstructionScript");

	ADesertKaijuFlock_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.ReceiveBeginPlay
// ()

void ADesertKaijuFlock_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.ReceiveBeginPlay");

	ADesertKaijuFlock_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.ExecuteUbergraph_DesertKaijuFlock_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaijuFlock_AIController_BP_C::ExecuteUbergraph_DesertKaijuFlock_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaijuFlock_AIController_BP.DesertKaijuFlock_AIController_BP_C.ExecuteUbergraph_DesertKaijuFlock_AIController_BP");

	ADesertKaijuFlock_AIController_BP_C_ExecuteUbergraph_DesertKaijuFlock_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
