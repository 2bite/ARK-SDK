// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_PipeFlex_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_PipeFlex_Stone.BP_PipeFlex_Stone_C.UserConstructionScript
// ()

void ABP_PipeFlex_Stone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlex_Stone.BP_PipeFlex_Stone_C.UserConstructionScript");

	ABP_PipeFlex_Stone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_PipeFlex_Stone.BP_PipeFlex_Stone_C.ExecuteUbergraph_BP_PipeFlex_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_PipeFlex_Stone_C::ExecuteUbergraph_BP_PipeFlex_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PipeFlex_Stone.BP_PipeFlex_Stone_C.ExecuteUbergraph_BP_PipeFlex_Stone");

	ABP_PipeFlex_Stone_C_ExecuteUbergraph_BP_PipeFlex_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
