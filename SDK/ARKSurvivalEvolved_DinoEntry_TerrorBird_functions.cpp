// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_TerrorBird_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_TerrorBird.DinoEntry_TerrorBird_C.ExecuteUbergraph_DinoEntry_TerrorBird
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_TerrorBird_C::ExecuteUbergraph_DinoEntry_TerrorBird(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_TerrorBird.DinoEntry_TerrorBird_C.ExecuteUbergraph_DinoEntry_TerrorBird");

	UDinoEntry_TerrorBird_C_ExecuteUbergraph_DinoEntry_TerrorBird_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
