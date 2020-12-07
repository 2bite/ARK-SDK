// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Kangaroo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Kangaroo.DinoEntry_Kangaroo_C.ExecuteUbergraph_DinoEntry_Kangaroo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Kangaroo_C::ExecuteUbergraph_DinoEntry_Kangaroo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Kangaroo.DinoEntry_Kangaroo_C.ExecuteUbergraph_DinoEntry_Kangaroo");

	UDinoEntry_Kangaroo_C_ExecuteUbergraph_DinoEntry_Kangaroo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
