// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stone_Platform_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stone_Platform_BP.Stone_Platform_BP_C.UserConstructionScript
// ()

void AStone_Platform_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stone_Platform_BP.Stone_Platform_BP_C.UserConstructionScript");

	AStone_Platform_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stone_Platform_BP.Stone_Platform_BP_C.ExecuteUbergraph_Stone_Platform_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStone_Platform_BP_C::ExecuteUbergraph_Stone_Platform_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stone_Platform_BP.Stone_Platform_BP_C.ExecuteUbergraph_Stone_Platform_BP");

	AStone_Platform_BP_C_ExecuteUbergraph_Stone_Platform_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
