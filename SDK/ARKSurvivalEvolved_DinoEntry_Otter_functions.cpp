// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Otter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Otter.DinoEntry_Otter_C.ExecuteUbergraph_DinoEntry_Otter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Otter_C::ExecuteUbergraph_DinoEntry_Otter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Otter.DinoEntry_Otter_C.ExecuteUbergraph_DinoEntry_Otter");

	UDinoEntry_Otter_C_ExecuteUbergraph_DinoEntry_Otter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
