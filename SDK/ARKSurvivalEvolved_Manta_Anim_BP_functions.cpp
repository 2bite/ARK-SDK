// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Manta_Anim_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Manta_Anim_BP.Manta_Anim_BP_C.ExecuteUbergraph_Manta_Anim_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UManta_Anim_BP_C::ExecuteUbergraph_Manta_Anim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Manta_Anim_BP.Manta_Anim_BP_C.ExecuteUbergraph_Manta_Anim_BP");

	UManta_Anim_BP_C_ExecuteUbergraph_Manta_Anim_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
