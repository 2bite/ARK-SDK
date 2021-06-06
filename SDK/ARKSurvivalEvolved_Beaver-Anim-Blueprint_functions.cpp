// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beaver-Anim-Blueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Beaver-Anim-Blueprint.Beaver-Anim-Blueprint_C.ExecuteUbergraph_Beaver-Anim-Blueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBeaver_Anim_Blueprint_C::ExecuteUbergraph_Beaver_Anim_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Beaver-Anim-Blueprint.Beaver-Anim-Blueprint_C.ExecuteUbergraph_Beaver-Anim-Blueprint");

	UBeaver_Anim_Blueprint_C_ExecuteUbergraph_Beaver_Anim_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
