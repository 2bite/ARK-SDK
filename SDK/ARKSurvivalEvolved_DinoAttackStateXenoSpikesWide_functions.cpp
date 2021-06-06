// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateXenoSpikesWide_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C.ExecuteUbergraph_DinoAttackStateXenoSpikesWide
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateXenoSpikesWide_C::ExecuteUbergraph_DinoAttackStateXenoSpikesWide(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateXenoSpikesWide.DinoAttackStateXenoSpikesWide_C.ExecuteUbergraph_DinoAttackStateXenoSpikesWide");

	UDinoAttackStateXenoSpikesWide_C_ExecuteUbergraph_DinoAttackStateXenoSpikesWide_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
