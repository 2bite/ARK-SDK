// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BPFX_EXT_WL_TreeA_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C.ExecuteUbergraph_BPFX_EXT_WL_TreeA
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBPFX_EXT_WL_TreeA_C::ExecuteUbergraph_BPFX_EXT_WL_TreeA(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C.ExecuteUbergraph_BPFX_EXT_WL_TreeA");

	UBPFX_EXT_WL_TreeA_C_ExecuteUbergraph_BPFX_EXT_WL_TreeA_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
