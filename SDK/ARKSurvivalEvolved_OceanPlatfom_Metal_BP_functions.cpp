// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatfom_Metal_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.BPOnLinkedStructureDestroyed
// ()
// Parameters:
// class APrimalStructure**       DestroyedStructure             (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Metal_BP_C::BPOnLinkedStructureDestroyed(class APrimalStructure** DestroyedStructure)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.BPOnLinkedStructureDestroyed");

	AOceanPlatfom_Metal_BP_C_BPOnLinkedStructureDestroyed_Params params;
	params.DestroyedStructure = DestroyedStructure;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.UserConstructionScript
// ()

void AOceanPlatfom_Metal_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.UserConstructionScript");

	AOceanPlatfom_Metal_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ReceiveBeginPlay
// ()

void AOceanPlatfom_Metal_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ReceiveBeginPlay");

	AOceanPlatfom_Metal_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ExecuteUbergraph_OceanPlatfom_Metal_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatfom_Metal_BP_C::ExecuteUbergraph_OceanPlatfom_Metal_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatfom_Metal_BP.OceanPlatfom_Metal_BP_C.ExecuteUbergraph_OceanPlatfom_Metal_BP");

	AOceanPlatfom_Metal_BP_C_ExecuteUbergraph_OceanPlatfom_Metal_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
