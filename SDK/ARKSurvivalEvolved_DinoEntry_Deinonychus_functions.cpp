// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Deinonychus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Deinonychus.DinoEntry_Deinonychus_C.ExecuteUbergraph_DinoEntry_Deinonychus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Deinonychus_C::ExecuteUbergraph_DinoEntry_Deinonychus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Deinonychus.DinoEntry_Deinonychus_C.ExecuteUbergraph_DinoEntry_Deinonychus");

	UDinoEntry_Deinonychus_C_ExecuteUbergraph_DinoEntry_Deinonychus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
