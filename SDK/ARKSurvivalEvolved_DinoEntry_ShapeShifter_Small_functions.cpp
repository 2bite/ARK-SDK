// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_ShapeShifter_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_ShapeShifter_Small.DinoEntry_ShapeShifter_Small_C.ExecuteUbergraph_DinoEntry_ShapeShifter_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_ShapeShifter_Small_C::ExecuteUbergraph_DinoEntry_ShapeShifter_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_ShapeShifter_Small.DinoEntry_ShapeShifter_Small_C.ExecuteUbergraph_DinoEntry_ShapeShifter_Small");

	UDinoEntry_ShapeShifter_Small_C_ExecuteUbergraph_DinoEntry_ShapeShifter_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
